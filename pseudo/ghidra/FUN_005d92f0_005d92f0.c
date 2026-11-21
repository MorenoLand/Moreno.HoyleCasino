// FUN_005d92f0  005d92f0

void FUN_005d92f0(undefined4 *param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  
  *param_1 = 0;
  *param_2 = 0;
  cVar1 = FUN_005da830();
  if (cVar1 != '\0') {
    iVar2 = FUN_005da880();
    *param_2 = iVar2;
    iVar2 = *param_2;
    if (25000 < iVar2) {
      if (iVar2 == 100000) {
        *param_1 = 1000;
        return;
      }
      if (iVar2 != 500000) {
        return;
      }
      *param_1 = 5000;
      return;
    }
    if (iVar2 == 25000) {
      *param_1 = 0xfa;
      return;
    }
    if (iVar2 != 1000) {
      if (iVar2 != 5000) {
        return;
      }
      *param_1 = 0x19;
      return;
    }
    *param_1 = 10;
    return;
  }
  iVar2 = *(int *)(DAT_007947e0 + 0x4f0c);
  if (iVar2 < 0x65) {
    if (iVar2 == 100) {
      *param_1 = 100;
      *param_2 = 1000000000;
      return;
    }
    if (iVar2 == 5) {
      *param_1 = 5;
      *param_2 = 1000;
      return;
    }
    if (iVar2 == 10) {
      *param_1 = 10;
      *param_2 = 2000;
      return;
    }
    if (iVar2 == 0x19) {
      *param_1 = 0x19;
      *param_2 = 3000;
      return;
    }
  }
  else {
    if (iVar2 == 0xfa) {
      *param_1 = 0xfa;
      *param_2 = 500;
      return;
    }
    if (iVar2 == 1000) {
      *param_1 = 1000;
      *param_2 = 2000;
      return;
    }
    if (iVar2 == 0x4d2) {
      *param_1 = 5;
      *param_2 = 1000000000;
      return;
    }
  }
  FUN_005e9f20("false","..\\Casino\\casinoroom.cpp",0x28a);
  return;
}

