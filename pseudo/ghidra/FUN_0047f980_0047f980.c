// FUN_0047f980  0047f980

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0047f980(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 local_18;
  undefined4 local_14;
  
  (**(code **)(*DAT_0162ee84 + 0x80))(0x391,0,0,5,1,0x3f800000,_DAT_006b3654,0);
  for (local_14 = 0; local_14 < 5; local_14 = local_14 + 1) {
    local_18 = *(int *)(param_1 + 0x4a4);
    while( true ) {
      iVar1 = FUN_0060c9a0();
      if (iVar1 <= local_18) break;
      uVar2 = FUN_0060ca40(local_18);
      iVar1 = FUN_0060c9a0();
      iVar1 = FUN_0062fbf0((iVar1 + -1) - *(int *)(param_1 + 0x4a4));
      uVar3 = FUN_0060ca40(*(int *)(param_1 + 0x4a4) + iVar1);
      FUN_0060ca70(local_18,uVar3);
      FUN_0060ca70(*(int *)(param_1 + 0x4a4) + iVar1,uVar2);
      local_18 = local_18 + 1;
    }
  }
  uVar2 = FUN_0060c9a0();
  *(undefined4 *)(param_1 + 0x4a8) = uVar2;
  return;
}

