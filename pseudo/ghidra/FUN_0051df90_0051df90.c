// FUN_0051df90  0051df90

void __fastcall FUN_0051df90(int param_1)

{
  undefined *puVar1;
  int *piVar2;
  undefined4 uVar3;
  int local_10;
  undefined *local_8;
  
  puVar1 = (&PTR_s_SID_POKERTOURNAMENT_TNAME_OMAHAH_007219d0)[*(int *)(param_1 + 0x1c8) * 2];
  local_8 = (&PTR_s_SID_POKERTOURNAMENT_TNAME_7CARDS_007219d4)[*(int *)(param_1 + 0x1c8) * 2];
  if (*(int *)(param_1 + 0x1cc) < 0x16) {
    if (*(int *)(param_1 + 0x1cc) < 0xf) {
      if (7 < *(int *)(param_1 + 0x1cc)) {
        local_8 = local_8 + 0x14;
      }
    }
    else {
      local_8 = local_8 + 0x28;
    }
  }
  else {
    local_8 = local_8 + 0x3c;
  }
  for (local_10 = 1; local_10 < 4; local_10 = local_10 + 1) {
    FUN_0051e100(local_10);
  }
  FUN_0051e480();
  for (local_10 = 3; local_10 < 8; local_10 = local_10 + 1) {
    piVar2 = (int *)FUN_005fb300(local_10);
    (**(code **)(*piVar2 + 0xd0))();
  }
  piVar2 = (int *)FUN_005fb300(*(int *)(param_1 + 0x1c4) + 3);
  (**(code **)(*piVar2 + 0xcc))();
  piVar2 = (int *)FUN_005fb2b0(0xe);
  (**(code **)(*piVar2 + 0xb0))(*(int *)(param_1 + 0x1c8) + -1);
  uVar3 = 100;
  FUN_005fb2b0(0xf);
  FUN_005eb5d0(uVar3);
  piVar2 = (int *)FUN_005fb2b0(0xf);
  (**(code **)(*piVar2 + 0x44))(puVar1,local_8);
  return;
}

