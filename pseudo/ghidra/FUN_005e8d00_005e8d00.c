// FUN_005e8d00  005e8d00

void FUN_005e8d00(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 local_8;
  
  for (local_8 = 0; local_8 < 6; local_8 = local_8 + 1) {
    uVar2 = 0xffffffff;
    uVar1 = FUN_005fb3a0(local_8);
    FUN_005fbd10(uVar1,uVar2);
  }
  uVar2 = 0xffffffff;
  uVar1 = FUN_005fb300(200);
  FUN_005fbcb0(uVar1,uVar2);
  uVar2 = 0xffffffff;
  uVar1 = FUN_005fb300(0xc9);
  FUN_005fbcb0(uVar1,uVar2);
  uVar2 = 0xffffffff;
  uVar1 = FUN_005fb2b0(0);
  FUN_005fbc80(uVar1,uVar2);
  uVar2 = 0xffffffff;
  uVar1 = FUN_005fb2b0(1);
  FUN_005fbc80(uVar1,uVar2);
  return;
}

