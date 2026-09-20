
// Quando a página terminar de carregar, "escutamos" o evento de
// envio (submit) do formulário e chamamos a função handleSubmit.
document.addEventListener('DOMContentLoaded', function () {
  var form = document.querySelector('#reservaForm');
  form.addEventListener('submit', handleSubmit);
});


// Esta é a função principal. Ela roda toda vez que o usuário
// clica no botão "Solicitar reserva".
function handleSubmit(event) {

  // Impede que o formulário seja enviado
  event.preventDefault();

  // Antes de validar de novo, apaga as mensagens de erro antigas.
  limparErros();

  // Esta variável vai virar "false" assim que encontrarmos
  // qualquer erro. No final, só seguimos em frente se ela
  // continuar "true".
  var formularioValido = true;

  // Pegamos o valor de cada campo do formulário.
  var nome = document.querySelector('#nome').value.trim();
  var email = document.querySelector('#email').value.trim();
  var telefone = document.querySelector('#telefone').value.trim();
  var nascimento = document.querySelector('#nascimento').value;
  var checkin = document.querySelector('#checkin').value;
  var checkout = document.querySelector('#checkout').value;
  var hospedesTexto = document.querySelector('#hospedes').value;
  var quarto = document.querySelector('#quarto').value;
  var senha = document.querySelector('#senha').value;
  var confirmaSenha = document.querySelector('#confirmaSenha').value;
  var aceite = document.querySelector('#aceite').checked;

  // Convertendo a quantidade de hóspedes de texto para número.
  var hospedes = parseInt(hospedesTexto, 10);

  // Regra: pelo menos 5 caracteres e pelo menos duas palavras.
  var nomeValido = true;

  if (nome.length < 5) {
    nomeValido = false;
  }

  var palavrasDoNome = nome.split(' ');
  var quantidadeDePalavras = 0;

  for (var i = 0; i < palavrasDoNome.length; i++) {
    if (palavrasDoNome[i] !== '') {
      quantidadeDePalavras = quantidadeDePalavras + 1;
    }
  }

  if (quantidadeDePalavras < 2) {
    nomeValido = false;
  }

  if (nomeValido === false) {
    mostrarErro('nome', 'Informe pelo menos 5 caracteres e duas palavras (nome e sobrenome).');
    formularioValido = false;
  }

  var regexEmail = /^[^\s@]+@[^\s@]+\.[^\s@]+$/;

  if (regexEmail.test(email) === false) {
    mostrarErro('email', 'Informe um e-mail válido (ex: nome@dominio.com).');
    formularioValido = false;
  }

  // Regra: exatamente 11 números, ignorando espaço, parênteses e hífen.
  var telefoneLimpo = telefone.replace(/\s/g, '');   // remove espaços
  telefoneLimpo = telefoneLimpo.replace(/\(/g, '');  // remove "("
  telefoneLimpo = telefoneLimpo.replace(/\)/g, '');  // remove ")"
  telefoneLimpo = telefoneLimpo.replace(/-/g, '');   // remove "-"

  var regexTelefone = /^[0-9]{11}$/;

  if (regexTelefone.test(telefoneLimpo) === false) {
    mostrarErro('telefone', 'O telefone deve conter exatamente 11 números.');
    formularioValido = false;
  }

  if (nascimento === '') {
    mostrarErro('nascimento', 'A data de nascimento é obrigatória.');
    formularioValido = false;
  } else {
    var idade = calcularIdade(nascimento);

    if (idade < 18) {
      mostrarErro('nascimento', 'O hóspede responsável deve possuir 18 anos ou mais.');
      formularioValido = false;
    }
  }

  if (checkin === '') {
    mostrarErro('checkin', 'A data de check-in é obrigatória.');
    formularioValido = false;
  } else {
    var hoje = new Date();
    hoje.setHours(0, 0, 0, 0);
    var dataCheckin = new Date(checkin + 'T00:00:00');

    if (dataCheckin < hoje) {
      mostrarErro('checkin', 'A data de check-in não pode ser anterior à data atual.');
      formularioValido = false;
    }
  }

  if (checkout === '') {
    mostrarErro('checkout', 'A data de check-out é obrigatória.');
    formularioValido = false;
  } else if (checkin !== '') {
    var dataCheckinComparar = new Date(checkin + 'T00:00:00');
    var dataCheckoutComparar = new Date(checkout + 'T00:00:00');

    if (dataCheckoutComparar <= dataCheckinComparar) {
      mostrarErro('checkout', 'A data de check-out deve ser posterior à data de check-in.');
      formularioValido = false;
    }
  }

  if (hospedesTexto === '' || isNaN(hospedes) || hospedes <= 0 || hospedes > 5) {
    mostrarErro('hospedes', 'A quantidade deve ser um número entre 1 e 5.');
    formularioValido = false;
  }

  if (quarto === '') {
    mostrarErro('quarto', 'Selecione um tipo de quarto.');
    formularioValido = false;
  } else {
    // Capacidade máxima de cada tipo de quarto.
    var capacidadeMaxima = 0;

    if (quarto === 'Individual') {
      capacidadeMaxima = 1;
    } else if (quarto === 'Duplo') {
      capacidadeMaxima = 2;
    } else if (quarto === 'Família') {
      capacidadeMaxima = 5;
    }

    if (hospedesTexto !== '' && isNaN(hospedes) === false && hospedes > 0) {
      if (hospedes > capacidadeMaxima) {
        mostrarErro('quarto', 'O quarto ' + quarto + ' suporta no máximo ' + capacidadeMaxima + ' hóspede(s).');
        formularioValido = false;
      }
    }
  }

  var senhaValida = true;

  if (senha.length < 8) {
    senhaValida = false;
  }

  var temLetraMaiuscula = /[A-Z]/.test(senha);
  var temNumero = /[0-9]/.test(senha);

  if (temLetraMaiuscula === false) {
    senhaValida = false;
  }

  if (temNumero === false) {
    senhaValida = false;
  }

  if (senhaValida === false) {
    mostrarErro('senha', 'A senha deve ter no mínimo 8 caracteres, 1 letra maiúscula e 1 número.');
    formularioValido = false;
  }

  if (confirmaSenha === '') {
    mostrarErro('confirmaSenha', 'Confirme a senha informada.');
    formularioValido = false;
  } else if (senha !== confirmaSenha) {
    mostrarErro('confirmaSenha', 'As senhas não coincidem.');
    formularioValido = false;
  }

  if (aceite === false) {
    mostrarErro('aceite', 'Você deve aceitar as condições da reserva.');
    formularioValido = false;
  }


  // Se algum campo deu erro, paramos por aqui e não seguimos.
  if (formularioValido === false) {
    return;
  }


  // Desafio adicional: calcular quantas diárias tem a reserva.
  var dataDeEntrada = new Date(checkin + 'T00:00:00');
  var dataDeSaida = new Date(checkout + 'T00:00:00');
  var diferencaEmMilissegundos = dataDeSaida - dataDeEntrada;
  var umDiaEmMilissegundos = 1000 * 60 * 60 * 24;
  var diarias = Math.round(diferencaEmMilissegundos / umDiaEmMilissegundos);

  // Objeto com os dados finais da reserva.
  var reserva = {
    nome: nome,
    email: email,
    telefone: telefone,
    checkin: checkin,
    checkout: checkout,
    hospedes: hospedes,
    quarto: quarto,
    diarias: diarias
  };

  exibirResultado(reserva);
}

// Mostra uma mensagem de erro embaixo de um campo específico.
function mostrarErro(nomeDoCampo, mensagem) {
  var span = document.querySelector('#erro-' + nomeDoCampo);
  if (span !== null) {
    span.textContent = mensagem;
  }

  var input = document.querySelector('#' + nomeDoCampo);
  if (input !== null) {
    input.classList.add('campo-invalido');
  }
}


// Apaga todas as mensagens de erro e as bordas vermelhas.
function limparErros() {
  var todosOsErros = document.querySelectorAll('.erro');
  for (var i = 0; i < todosOsErros.length; i++) {
    todosOsErros[i].textContent = '';
  }

  var todosOsCamposInvalidos = document.querySelectorAll('.campo-invalido');
  for (var j = 0; j < todosOsCamposInvalidos.length; j++) {
    todosOsCamposInvalidos[j].classList.remove('campo-invalido');
  }
}


// Calcula a idade da pessoa a partir da data de nascimento.
function calcularIdade(dataNascimento) {
  var hoje = new Date();
  var nascimento = new Date(dataNascimento + 'T00:00:00');

  var idade = hoje.getFullYear() - nascimento.getFullYear();

  // Verifica se a pessoa ainda não fez aniversário este ano.
  var mesAtual = hoje.getMonth();
  var mesNascimento = nascimento.getMonth();

  if (mesAtual < mesNascimento) {
    idade = idade - 1;
  } else if (mesAtual === mesNascimento) {
    if (hoje.getDate() < nascimento.getDate()) {
      idade = idade - 1;
    }
  }

  return idade;
}


// Mostra o resultado final na tela, depois que tudo foi validado.
function exibirResultado(reserva) {
  var caixaResultado = document.querySelector('#resultado');
  var textoJson = document.querySelector('#jsonReserva');

  textoJson.textContent = JSON.stringify(reserva, null, 2);

  caixaResultado.classList.remove('oculto');
  caixaResultado.scrollIntoView({ behavior: 'smooth', block: 'nearest' });
}
