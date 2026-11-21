// FUN_00628490  00628490

void __thiscall FUN_00628490(int *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  
  iVar2 = FUN_005f3fe0();
  if (((char)param_1[0x30] == '\0') || ((iVar2 != 0 && (iVar2 != param_1[1])))) {
    cVar1 = (**(code **)(*param_1 + 0x84))(param_2);
    if (cVar1 == '\0') {
      return;
    }
    cVar1 = FUN_00615140();
    if (cVar1 == '\0') {
      return;
    }
  }
  (**(code **)(*param_1 + 0xdc))(-1 < *(int *)(param_2 + 0x10),1);
  *(undefined1 *)(param_2 + 4) = 1;
  return;
}

