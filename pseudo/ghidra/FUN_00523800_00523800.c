// FUN_00523800  00523800

void __fastcall FUN_00523800(int param_1)

{
  char cVar1;
  int iVar2;
  int local_8;
  
  iVar2 = FUN_005eafc0();
  if (iVar2 == *(int *)(param_1 + 0x198)) {
    iVar2 = FUN_005eb220();
    if (iVar2 == 0xb) {
      for (local_8 = 0; local_8 < 0xa1; local_8 = local_8 + 1) {
        cVar1 = FUN_00528360(local_8);
        if (cVar1 != '\0') {
          (**(code **)(**(int **)(DAT_0079337c + 0x80 + local_8 * 4) + 0xc4))();
        }
      }
    }
  }
  return;
}

