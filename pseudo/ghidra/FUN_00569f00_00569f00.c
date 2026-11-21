// FUN_00569f00  00569f00

undefined4 FUN_00569f00(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 == -1) {
    uVar2 = 0;
  }
  else {
    iVar1 = *(int *)(DAT_007947e0 + 0x4f14);
    if (iVar1 == 0) {
      if (param_1 < 4) {
        uVar2 = 0x31226b;
      }
      else if (param_1 < 6) {
        uVar2 = 0x31226a;
      }
      else if (param_1 < 9) {
        uVar2 = 0x312269;
      }
      else {
        uVar2 = 0x312268;
      }
    }
    else if (iVar1 == 5) {
      if (param_1 < 3) {
        uVar2 = 0x31226b;
      }
      else if (param_1 < 6) {
        uVar2 = 0x31226a;
      }
      else if (param_1 < 10) {
        uVar2 = 0x312269;
      }
      else {
        uVar2 = 0x312268;
      }
    }
    else if (iVar1 == 10) {
      if (param_1 < 3) {
        uVar2 = 0x31226b;
      }
      else if (param_1 < 6) {
        uVar2 = 0x31226a;
      }
      else if (param_1 < 10) {
        uVar2 = 0x312269;
      }
      else {
        uVar2 = 0x312268;
      }
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}

