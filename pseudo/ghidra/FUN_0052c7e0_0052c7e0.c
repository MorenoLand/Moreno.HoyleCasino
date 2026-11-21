// FUN_0052c7e0  0052c7e0

void __fastcall FUN_0052c7e0(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int local_8;
  
  (**(code **)(**(int **)(param_1 + 8) + 0x70))();
  FUN_0052ddf0();
  FUN_0052cd40();
  if ((DAT_0079338c[1] != 0) || (DAT_0079338c[2] != 0)) {
    for (local_8 = 0; local_8 < 5; local_8 = local_8 + 1) {
      (**(code **)(**(int **)(param_1 + 0xcc + local_8 * 4) + 0x70))();
      FUN_005f5d50(0);
      (**(code **)(**(int **)(param_1 + 0xe0 + local_8 * 4) + 0x70))();
      FUN_005f5d50(0);
      FUN_005f5d50(0);
      (**(code **)(**(int **)(param_1 + 0xb4 + local_8 * 4) + 0x70))();
    }
    FUN_0052abe0();
    FUN_005f5d50(0);
    (**(code **)(**(int **)(param_1 + 0xc0) + 0x70))();
    FUN_00609870(*(undefined4 *)(param_1 + 0x60),1);
    FUN_00609870(*(undefined4 *)(param_1 + 100),1);
    FUN_005f5d50(0);
    (**(code **)(**(int **)(param_1 + 200) + 0x70))();
    iVar2 = (**(code **)(*DAT_00793394 + 0x40))();
    if (iVar2 == 1) {
      if (DAT_0079338c[2] == 0) {
        FUN_005f5d50(0);
      }
      else {
        (**(code **)(**(int **)(param_1 + 0xc4) + 0xb0))(DAT_0079338c[2] + -1);
        (**(code **)(**(int **)(param_1 + 0xc4) + 0x74))();
      }
    }
    else {
      FUN_005f5d50(0);
    }
    iVar2 = DAT_0079338c[2];
    iVar3 = (**(code **)(*DAT_0079338c + 4))();
    if ((iVar2 != iVar3) && (cVar1 = (**(code **)(*DAT_00793394 + 0x3c))(), cVar1 != '\0')) {
      (**(code **)(**(int **)(param_1 + 0xc4) + 0x70))();
    }
  }
  return;
}

