window.onload = function(){
    var intervalo, milisec = 000, sec = 00, min = 00;
    var msec = document.getElementById("milisec");
    var seg = document.getElementById("sec");
    var minu = document.getElementById("min");
    var biniciar = document.getElementById("iniciar");
    var bpause = document.getElementById("pause");
    var breset = document.getElementById("reset");

        biniciar.onclick = function(){
                intervalo = setInterval(start, 10);
        }
        bpause.onclick = function(){
                clearInterval(intervalo);
        }
        breset.onclick = function(){
                clearInterval(intervalo);
                sec = min = milisec = "00";
                seg.innerHTML = sec;
                minu.innerHTML = min;
                msec.innerHTML = milisec;
                
        }

        function start(){
            milisec++;
            if(milisec <= 9){
                msec.innerHTML = "0" + milisec;
            }
            if(milisec > 9){
                msec.innerHTML = milisec;
            }

            if(milisec > 99){
                sec++;
                seg.innerHTML = "0" + sec;
                milisec = 0;
                msec.innerHTML = "0" + 0;
            }
            if(sec > 9){
                seg.innerHTML = sec;
            }

            if(sec > 60){
                min++;
                minu.innerHTML = "0" + min;
                sec = 0;
                seg.innerHTML = "0" + 0;
            }
            if(min > 9){
                minu.innerHTML = min;
            }
        }
}