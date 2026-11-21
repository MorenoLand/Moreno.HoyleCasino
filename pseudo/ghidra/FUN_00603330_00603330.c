// FUN_00603330  00603330

void __fastcall FUN_00603330(int *param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = FUN_005fc360();
  if (iVar2 == 0) {
    (**(code **)(*param_1 + 8))(1,*(undefined4 *)(param_1[3] + 0x1ac));
  }
  else if (iVar2 == 1) {
    (**(code **)(*param_1 + 8))(0,*(undefined4 *)(param_1[3] + 0x1b0));
    cVar1 = FUN_006026d0();
    if ((cVar1 != '\0') && (cVar1 = FUN_005f54a0(), cVar1 != '\0')) {
      if ((char)param_1[8] == '\0') {
        (**(code **)(*(int *)param_1[3] + 0xc0))();
      }
      else {
        (**(code **)(*(int *)param_1[3] + 0xc4))();
      }
    }
  }
  return;
}

