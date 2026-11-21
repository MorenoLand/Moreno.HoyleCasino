// FUN_004da4d0  004da4d0

void __fastcall FUN_004da4d0(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  char local_74 [108];
  uint local_8;
  
  local_8 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  cVar1 = FUN_004a1e10(DAT_00791390);
  if (cVar1 != '\0') {
    uVar2 = FUN_00630f40("SID_POKER_HIGHCARD");
    sprintf(local_74,"%s",uVar2);
  }
  cVar1 = FUN_004a1e10(DAT_007913b0);
  if (cVar1 != '\0') {
    uVar2 = FUN_00630f40("SID_POKER_PAIR");
    sprintf(local_74,"%s",uVar2);
  }
  cVar1 = FUN_004a1e10(DAT_0079139c);
  if (cVar1 != '\0') {
    uVar2 = FUN_00630f40("SID_POKER_FOURFLUSH");
    sprintf(local_74,"%s",uVar2);
  }
  cVar1 = FUN_004a1e10(DAT_00791380);
  if (cVar1 != '\0') {
    uVar2 = FUN_00630f40("SID_POKER_TWOPAIR");
    sprintf(local_74,"%s",uVar2);
  }
  cVar1 = FUN_004a1e10(DAT_00791418);
  if (cVar1 != '\0') {
    uVar2 = FUN_00630f40("SID_POKER_3OFAKIND");
    sprintf(local_74,"%s",uVar2);
  }
  cVar1 = FUN_004a1e10(DAT_0079140c);
  if (cVar1 != '\0') {
    uVar2 = FUN_00630f40("SID_POKER_STRAIGHT");
    sprintf(local_74,"%s",uVar2);
  }
  cVar1 = FUN_004a1e10(DAT_007913e4);
  if (cVar1 != '\0') {
    uVar2 = FUN_00630f40("SID_POKER_DOG");
    sprintf(local_74,"%s",uVar2);
  }
  cVar1 = FUN_004a1e10(DAT_00791384);
  if (cVar1 != '\0') {
    uVar2 = FUN_00630f40("SID_POKER_TIGER");
    sprintf(local_74,"%s",uVar2);
  }
  cVar1 = FUN_004a1e10(DAT_007913a0);
  if (cVar1 != '\0') {
    uVar2 = FUN_00630f40("SID_POKER_FLUSH");
    sprintf(local_74,"%s",uVar2);
  }
  cVar1 = FUN_004a1e10(DAT_007913d4);
  if (cVar1 != '\0') {
    uVar2 = FUN_00630f40("SID_POKER_FULLHOUSE");
    sprintf(local_74,"%s",uVar2);
  }
  cVar1 = FUN_004a1e10(DAT_00791394);
  if (cVar1 != '\0') {
    uVar2 = FUN_00630f40("SID_POKER_4OFAKIND");
    sprintf(local_74,"%s",uVar2);
  }
  cVar1 = FUN_004a1e10(DAT_00791398);
  if (cVar1 != '\0') {
    uVar2 = FUN_00630f40("SID_POKER_STRAIGHTFLUSH");
    sprintf(local_74,"%s",uVar2);
  }
  cVar1 = FUN_004a1e10(DAT_007913e8);
  if (cVar1 != '\0') {
    uVar2 = FUN_00630f40("SID_POKER_ROYALFLUSH");
    sprintf(local_74,"%s",uVar2);
  }
  cVar1 = FUN_004a1e10(DAT_007913c4);
  if (cVar1 != '\0') {
    uVar2 = FUN_00630f40("SID_POKER_DOGFLUSH");
    sprintf(local_74,"%s",uVar2);
  }
  cVar1 = FUN_004a1e10(DAT_007913ac);
  if (cVar1 != '\0') {
    uVar2 = FUN_00630f40("SID_POKER_TIGERFLUSH");
    sprintf(local_74,"%s",uVar2);
  }
  cVar1 = FUN_004a1e10(DAT_007913cc);
  if (cVar1 != '\0') {
    uVar2 = FUN_00630f40("SID_POKER_5OFAKIND");
    sprintf(local_74,"%s",uVar2);
  }
  (**(code **)(**(int **)(param_1 + 0x24) + 0xb4))(local_74);
  (**(code **)(**(int **)(param_1 + 0x20) + 0x74))();
  (**(code **)(**(int **)(param_1 + 0x24) + 0x74))();
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

