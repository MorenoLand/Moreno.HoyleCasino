// FUN_005dea20  005dea20

uint FUN_005dea20(int param_1)

{
  uint in_EAX;
  uint uVar1;
  
  if (param_1 == 0x17) {
    uVar1 = in_EAX & 0xffffff00;
  }
  else {
    uVar1 = FUN_00635c40(param_1);
  }
  return uVar1;
}

