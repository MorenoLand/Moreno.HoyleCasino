// FUN_00483630  00483630

void FUN_00483630(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 extraout_var;
  undefined1 local_88 [8];
  undefined4 local_80;
  char local_7c [108];
  uint local_10;
  int local_c;
  undefined4 local_8;
  
  local_10 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  local_c = FUN_0047e390(param_1);
  local_8 = FUN_004c70d0(extraout_var);
  local_80 = FUN_005dcb00(local_8);
  FUN_0062fde0("----------------------------------\n");
  uVar1 = FUN_004c6150();
  sprintf(local_7c,"Player %d:  %s\n",param_1,uVar1);
  FUN_0062fde0(local_7c);
  uVar1 = FUN_004c6a70();
  puVar2 = (undefined4 *)FUN_005d5a90(local_88);
  sprintf(local_7c,"Bank: %d, (%d=player)\n",*puVar2,uVar1);
  FUN_0062fde0(local_7c);
  sprintf(local_7c,"Primary Strategy: %d\n",*(undefined4 *)(local_c + 0x3fc));
  FUN_0062fde0(local_7c);
  sprintf(local_7c,"Secondary Strategy: %d\n",*(undefined4 *)(local_c + 0x400));
  FUN_0062fde0(local_7c);
  uVar1 = FUN_004c70d0();
  sprintf(local_7c,"Seat: %d\n",uVar1);
  FUN_0062fde0(local_7c);
  __security_check_cookie(local_10 ^ (uint)&stack0xfffffffc);
  return;
}

