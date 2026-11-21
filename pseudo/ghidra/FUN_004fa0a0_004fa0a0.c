// FUN_004fa0a0  004fa0a0

void __thiscall FUN_004fa0a0(int *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  
  FUN_005d7f40(param_2);
  if ((((*(int *)(param_2 + 0x18) == 4) && (*(char *)(param_2 + 4) == '\0')) && (DAT_00791364 != 0))
     && (cVar1 = FUN_005da7b0(), cVar1 != '\0')) {
    iVar2 = tolower((int)*(char *)(param_2 + 0x14));
    if (iVar2 == 0x69) {
      FUN_005f2a60(0x30e7a2,0);
      cVar1 = FUN_006026d0();
      if (cVar1 != '\0') {
        (**(code **)(*param_1 + 0x4c))(0x30e7a2,0xffffffff);
        *(undefined1 *)(param_2 + 4) = 1;
      }
    }
    else if (iVar2 == 0x78) {
      FUN_005f2a60(0x30e7a3,0);
      cVar1 = FUN_006026d0();
      if (cVar1 != '\0') {
        (**(code **)(*param_1 + 0x4c))(0x30e7a3,0xffffffff);
        *(undefined1 *)(param_2 + 4) = 1;
      }
    }
  }
  return;
}

