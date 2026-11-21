// FUN_005f2870  005f2870

void __fastcall FUN_005f2870(undefined4 param_1)

{
  int iVar1;
  undefined4 local_8;
  
  local_8 = 0;
  while( true ) {
    iVar1 = FUN_0060c9a0(param_1);
    if (iVar1 <= local_8) break;
    FUN_0060ca40(local_8);
    FUN_005fef90();
    local_8 = local_8 + 1;
  }
  return;
}

