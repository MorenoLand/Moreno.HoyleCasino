// FUN_00411dc0  00411dc0

void FUN_00411dc0(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 extraout_var;
  int local_8;
  
  FUN_005f83d0(0x424,0);
  uVar4 = 3;
  uVar3 = 0;
  uVar2 = 0x49;
  uVar1 = FUN_00630f40("SID_BLACKJACK_COUNT",0x49,0,3,extraout_var);
  FUN_005f73e0(uVar1,uVar2,uVar3,uVar4);
  FUN_005f9de0(0,0,0x444,0x50,7,1,&PTR_006b27f8,0xffffffff,0xffffffff,0xffffffff,0xffffffff,0);
  for (local_8 = 0; local_8 < 4; local_8 = local_8 + 1) {
    FUN_005fa5b0(0,local_8,&PTR_006b27f8,0x23,100,0xf,5,local_8 * 0xe + 0x26,1,5,0xffffffff);
  }
  return;
}

