// FUN_004f9d80  004f9d80

void FUN_004f9d80(int *param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 extraout_var;
  undefined4 uVar3;
  
  *param_1 = 0;
  *param_2 = 0;
  cVar1 = FUN_005da830();
  if (cVar1 == '\0') {
    *param_1 = *(int *)(DAT_007947e0 + 0x4f0c);
    *param_2 = *(int *)(DAT_007947e0 + 0x4f0c) << 1;
  }
  else {
    uVar3 = extraout_var;
    iVar2 = FUN_005da880();
    if (iVar2 < 0x61a9) {
      if (iVar2 == 25000) {
        *param_1 = 500;
      }
      else if (iVar2 == 1000) {
        *param_1 = 0x19;
      }
      else if (iVar2 == 5000) {
        *param_1 = 100;
      }
    }
    else if (iVar2 == 100000) {
      *param_1 = 0x9c4;
    }
    else if (iVar2 == 500000) {
      *param_1 = 10000;
    }
    *param_2 = *param_2 << 1;
    if ((*(int *)(DAT_007947e0 + 0x4f18) == 5) || (*(int *)(DAT_007947e0 + 0x4f18) == 6)) {
      iVar2 = FUN_005da880(iVar2,uVar3);
      if (iVar2 == 5000) {
        *param_1 = 0xfa;
        *param_2 = 500;
      }
      else {
        *param_1 = *param_1 << 1;
        *param_2 = *param_2 << 1;
      }
    }
  }
  return;
}

