// FUN_005443d0  005443d0

void FUN_005443d0(void)

{
  undefined4 uVar1;
  int local_8;
  
  for (local_8 = 0; local_8 < 4; local_8 = local_8 + 1) {
    FUN_005f9de0(0,local_8,local_8 + 0x31166a,0,0,2,&PTR_006b27f8,0xffffffff,0xffffffff,0xffffffff,
                 0xffffffff,0);
    uVar1 = 1;
    FUN_005fb300(local_8);
    FUN_005eb700(uVar1);
    FUN_00544b30(local_8);
    if (local_8 == 3) {
      uVar1 = 0;
      FUN_005fb300(3);
      FUN_00602790(uVar1);
      FUN_00544ac0(3);
    }
  }
  return;
}

