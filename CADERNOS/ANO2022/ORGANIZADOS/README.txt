=========================== COISAS UTEIS =====================================
1 .SABER SE UMA PORTA ESTA LIVRE
  NO CMD DIGITE
    netstat -o -n -a | find "3000"
    SE O RETORNO FOR COMO ABAIXO ESTÁ LIVRE
    D:\DEVJUNIOR3>

2. MODO 2
   netstat -ano | findstr 3000
   se o retorno for como no de cima esta LIVRE

3. MODO 3
   netstat -na | find "3000"
   IDEM AOS DEMAIS


fechar taskkill /PID 11348

https://developer.mozilla.org/pt-BR/docs/Web/HTTP/Basics_of_HTTP/MIME_types

https://developer.mozilla.org/en-US/docs/Learn/Server-side/Configuring_server_MIME_types
