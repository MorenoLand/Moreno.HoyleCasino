// FUN_004020a0  004020a0

undefined4 FUN_004020a0(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 == 2) {
    if (param_1 == 4) {
      uVar1 = 0x31128d;
    }
    else {
      uVar1 = 0x31128b;
    }
  }
  else if (param_1 == 4) {
    uVar1 = 0x31128c;
  }
  else {
    uVar1 = 0x31128a;
  }
  return uVar1;
}

