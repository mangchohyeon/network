const flag = 0;

function get_num(text) {
  const cmd = text;
  road_num = 0;
  car_num = 0;
  if(cmd == "road") {
    road_num = document.getElemenById("road_num").value();
    if(car_num != 0) {              //차와 도로의 수가 모두 입력되어있다면 flag = 1;
      flag = 1;
    }
  }

  else {
    car_num = document.getElementById("car_num").value();
    if(road_num != 0)
    {
      flag = 1;                   //차와 도로의 수가 모두 입력되어있다면 flag = 1;
    }
  }

}

function gen_road() {
  if(road_num == 0 || roan_num > 10)
  {
    alert("도로의 수는 1이상 10 이하 이어야 합니다!\n다시입력해주십시오!");
  }
  /* 아직 미완성 */
}

function cal_res() {
  if(flag) {
    alert("도로의 수와 차의 수를 모두 입력한 후 계산하여 주십시오!");
  }
}