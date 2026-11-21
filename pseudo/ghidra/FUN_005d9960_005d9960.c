// FUN_005d9960  005d9960

void __fastcall FUN_005d9960(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_8;
  
  local_8 = 0;
  while( true ) {
    iVar1 = (**(code **)(*DAT_0162ee84 + 0x10c))();
    if (iVar1 <= local_8) break;
    uVar2 = FUN_005dcb00(local_8);
    (**(code **)(*param_1 + 0x264))(uVar2);
    local_8 = local_8 + 1;
  }
  return;
}

