// FUN_00421f20  00421f20

void __thiscall FUN_00421f20(int *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  
  if ((*(char *)(param_2 + 4) == '\0') && (cVar1 = FUN_005f88f0(), cVar1 == '\0')) {
    if (*(int *)(param_2 + 0x18) == 4) {
      iVar2 = tolower((int)*(char *)(param_2 + 0x14));
      if (iVar2 == 0x74) {
        FUN_005db240();
        *(undefined1 *)(param_2 + 4) = 1;
      }
      iVar2 = tolower((int)*(char *)(param_2 + 0x14));
      if (iVar2 == 99) {
        FUN_005f2a60(0x3106cc,0);
        cVar1 = FUN_006026d0();
        if (cVar1 != '\0') {
          (**(code **)(*param_1 + 0x18))(1);
          *(undefined1 *)(param_2 + 4) = 1;
        }
      }
      iVar2 = tolower((int)*(char *)(param_2 + 0x14));
      if (iVar2 == 0x66) {
        FUN_005f2a60(0x3106cb,0);
        cVar1 = FUN_006026d0();
        if (cVar1 != '\0') {
          (**(code **)(*param_1 + 0x18))(0);
          *(undefined1 *)(param_2 + 4) = 1;
        }
      }
    }
    FUN_005f72f0(param_2);
  }
  return;
}

