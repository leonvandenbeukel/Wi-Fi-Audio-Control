const char MAIN_page[] PROGMEM = R"=====(
<!DOCTYPE html>
<html>    
    <head>
        <title>Wi-Fi Audio Control</title>
    </head>
<body>

    <form action="/bassGain" method="POST">
        <input type="range" name="left" id="left" min="0" max="33" value="30">
        <input type="range" name="right" id="right" min="0" max="33" value="30">

        <input type="submit">
    </form>

</body>
</html> 
)=====";
