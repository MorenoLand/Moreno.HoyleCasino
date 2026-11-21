// FUN_004654d0  004654d0

void __fastcall FUN_004654d0(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 local_18;
  undefined4 local_14;
  
  FUN_0047fae0(param_1);
  for (local_14 = 0; local_14 < 5; local_14 = local_14 + 1) {
    local_18 = 0;
    while( true ) {
      iVar1 = FUN_0060c9a0();
      if (iVar1 <= local_18) break;
      uVar2 = FUN_0060ca40(local_18);
      iVar1 = FUN_0060c9a0();
      uVar3 = FUN_0062fbf0(iVar1 + -1);
      uVar4 = FUN_0060ca40(uVar3);
      FUN_0060ca70(local_18,uVar4);
      FUN_0060ca70(uVar3,uVar2);
      local_18 = local_18 + 1;
    }
  }
  return;
}

