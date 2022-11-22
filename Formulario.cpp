<!DOCTYPE html>
<html lang="en">
  <head>
    <meta charset="UTF-8" />
    <meta http-equiv="X-UA-Compatible" content="IE=edge" />
    <meta name="viewport" content="width=device-width, initial-scale=1.0" />
    <title>Formulario</title>
    <style>
      * {
        margin: 0;
        padding: 0;
        box-sizing: border-box;
      }
      body {
        background-color: rgb(0, 14, 66);
      }
      .formulario-registro {
        width: 400px;
        background: rgb(0, 19, 87);
        padding: 30px;
        margin: auto;
        margin-top: 100px;
        border-radius: 4px;
        font-family: "Gill Sans", "Gill Sans MT", Calibri, "Trebuchet MS",
          sans-serif;
        color: white;
        box-shadow: 7px 13px 37px #000;
      }
      .formulario-registro h4 {
        font-size: 22px;
        margin-bottom: 20px;
      }
      .controls {
        width: 100%;
        background: rgb(33, 32, 32);
        color: #ffffff;
        padding: 10px;
        border: 1px rgb(0, 19, 87);
        border-radius: 4px;
        margin-bottom: 16px;
        font-family: "Gill Sans", "Gill Sans MT", Calibri, "Trebuchet MS",
          sans-serif;
        font-size: 18px;
      }
      .formulario-registro .boton {
        width: 100%;
        background: rgb(0, 52, 136);
        border: none;
        padding: 12px;
        color: white;
        margin: 16px 0;
        font-size: 16px;
        box-shadow: 7px 13px 37px #000;
      }
    </style>
  </head>
  <body>
    <section class="formulario-registro">
      <form id="form">
        <h4>Formulario de registro</h4>
        <input
          class="controls"
          type="text"
          placeholder="Ingrese su SSID"
          name="ssid"
          id="ssid"
        />
        <input
          name="password"
          id="password"
          class="controls"
          type="password"
          placeholder="Ingrese su contraseña"
        />
        <button submit class="boton">Registrar</button>
      </form>
    </section>
    <script>
      const form = document.getElementById("form");
      form.addEventListener("submit", (e) => {
        e.preventDefault();
        const formData = new FormData(e.target);
        const formProps = Object.fromEntries(formData);

        console.log("data->", formProps);
      });
    </script>
  </body>
</html>