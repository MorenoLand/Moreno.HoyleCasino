// FUN_00660c00  00660c00

void FUN_00660c00(int param_1)

{
  char cVar1;
  int iVar2;
  
  if (param_1 == 0) {
    cVar1 = FUN_0065ec60();
    if (cVar1 != '\0') {
      FUN_0065eab0(1);
    }
  }
  else if (param_1 == 1) {
    if (*(int *)(DAT_016306b0 + 0x1cc) != 0) {
      if (*(undefined4 **)(DAT_016306b0 + 0x1cc) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)(DAT_016306b0 + 0x1cc))(1);
      }
      *(undefined4 *)(DAT_016306b0 + 0x1cc) = 0;
    }
    iVar2 = FUN_0065ea70();
    if (iVar2 == 0) {
      if (*(char *)(DAT_016306b0 + 0x1d4) == '\0') {
        FUN_0065eab0(0);
        FUN_0064ed50();
      }
      else {
        (**(code **)(*DAT_0162ee84 + 0x2c))(0);
      }
    }
    else {
      FUN_0065eab0(0);
    }
  }
  return;
}

