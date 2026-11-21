// FUN_00561b50  00561b50

void __fastcall FUN_00561b50(int param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int local_8;
  
  (**(code **)(**(int **)(param_1 + 200) + 0x74))();
  if (*(int *)(DAT_0079343c + 4) < 999999) {
    FUN_00565a50(4);
    FUN_005664c0(*(undefined4 *)(DAT_0079343c + 4));
  }
  else {
    FUN_00566410();
  }
  FUN_00566210();
  iVar1 = *(int *)(DAT_0079343c + 8);
  iVar3 = FUN_0056b910();
  FUN_005664c0((iVar3 + 1) * iVar1);
  FUN_00566210();
  (**(code **)(**(int **)(param_1 + 0xd0) + 0x74))();
  if (*(int *)(DAT_0079343c + 8) != 0) {
    FUN_005602a0();
    (**(code **)(**(int **)(param_1 + 0xd8) + 0x70))();
    FUN_00566310();
    FUN_00566a20();
    FUN_005601d0(4);
    for (local_8 = 0; local_8 < 5; local_8 = local_8 + 1) {
      (**(code **)(**(int **)(param_1 + 0x60 + local_8 * 4) + 0xd0))();
    }
    if (*(int *)(DAT_0079343c + 8) == 5) {
      FUN_00560240(6);
    }
    else {
      cVar2 = FUN_0056a5d0();
      if (cVar2 != '\0') {
        FUN_005601d0(1);
        FUN_005601d0(0);
      }
    }
  }
  return;
}

