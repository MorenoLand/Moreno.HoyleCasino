// FUN_005f1a50  005f1a50

void __fastcall FUN_005f1a50(int param_1)

{
  int iVar1;
  undefined4 local_c;
  undefined4 local_8;
  
  if (*(int *)(param_1 + 4) != 0) {
    FUN_005fc250();
  }
  local_8 = 0;
  local_c = (int *)FUN_0060ca40(0);
  while( true ) {
    iVar1 = FUN_0060c9a0();
    if (iVar1 <= local_8) break;
    (**(code **)(*local_c + 8))();
    local_8 = local_8 + 1;
    local_c = (int *)FUN_0060ca40(local_8);
  }
  return;
}

