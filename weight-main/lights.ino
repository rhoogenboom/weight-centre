
void initialLights() {
  //switch green truck arrive off
  digitalWrite(truckArriveGreen, LOW);
      
  //switch red truck arrive on
  digitalWrite(truckArriveRed, HIGH);


  //switch red truck weight waiting light on
  digitalWrite(truckWeightWaitingRed, HIGH);

  //switch green truck weight waiting light off
  digitalWrite(truckWeightWaitingGreen, LOW);
}

void truckArrivedBarrierUp() {
  //switch green truck arrive on
  digitalWrite(truckArriveGreen, HIGH);
      
  //switch red truck arrive off
  digitalWrite(truckArriveRed, LOW);
}

