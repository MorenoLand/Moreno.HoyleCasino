// FUN_005f4540  005f4540

uint FUN_005f4540(int param_1)

{
  uint in_EAX;
  uint uVar1;
  
  if (param_1 == -1) {
    uVar1 = in_EAX & 0xffffff00;
  }
  else {
    uVar1 = FUN_00609b80(param_1);
  }
  return uVar1;
}

