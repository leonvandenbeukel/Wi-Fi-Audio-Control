const char MAIN_page[] PROGMEM = R"=====(
<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="utf-8">
    <meta name="viewport" content="width=device-width, initial-scale=1">
    <title>Wi-Fi Audio Control</title>
    <link rel="stylesheet" href="https://maxcdn.bootstrapcdn.com/bootstrap/4.4.1/css/bootstrap.min.css">
    <script src="https://ajax.googleapis.com/ajax/libs/jquery/3.4.1/jquery.min.js"></script>
    <script src="https://cdnjs.cloudflare.com/ajax/libs/popper.js/1.16.0/umd/popper.min.js"></script>
    <script src="https://maxcdn.bootstrapcdn.com/bootstrap/4.4.1/js/bootstrap.min.js"></script>

    <script>

        function changeBassGain(slider) {

            var sync = $('#sync').is(":checked");

            if (sync) {
                if (slider.id === 'left') {
                    $('#right').val($('#left').val());
                } else if (slider.id === 'right') {
                    $('#left').val($('#right').val());
                }
            }

            $.post("/bassGain",
                {
                    left: $('#left').val(),
                    right: $('#right').val()
                },
                function (data, status) {
                    console.log("Data: " + data + "\nStatus: " + status);
                }
            );
        }

    </script>

</head>

<body>

    <div class="container-fluid pt-3">

        <div class="card">
            <div class="card-body custom-control custom-switch">
                <h4 class="card-title">Bass Control</h4>

                <div class="form-check-inline">
                    <input type="range" name="left" id="left" min="0" max="33" value="30" onchange="changeBassGain(this);" class="custom-range">&nbsp;
                    <input type="checkbox" name="sync" id="sync" checked class="form-check-input">
                    <input type="range" name="right" id="right" min="0" max="33" value="30" onchange="changeBassGain(this);" class="custom-range">
                </div>
            </div>
        </div>
    </div>

</body>

</html>
)=====";
