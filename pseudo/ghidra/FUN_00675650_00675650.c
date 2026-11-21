// FUN_00675650  00675650

void FUN_00675650(void)

{
  char cVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 local_11c [256];
  int local_1c;
  int *local_18;
  char local_14 [8];
  uint local_c;
  int local_8;
  
  local_c = DAT_00781870 ^ (uint)&stack0xfffffffc;
  local_8 = 1;
  local_1c = 0;
  cVar1 = FUN_00675100(&local_18,"TORSO");
  if (cVar1 != '\0') {
    local_8 = 1;
    sprintf(local_14,"%d",1);
    local_1c = FUN_00607960(local_14,0);
    while (local_1c != 0) {
      FUN_006764e0(local_1c);
      (**(code **)(*local_18 + 0x10))(local_14,&PTR_006b27f8,local_11c,0x100);
      puVar3 = local_11c;
      iVar2 = FUN_006765a0(local_8 + -1);
      FUN_006757c0(iVar2 + 8,puVar3);
      local_8 = local_8 + 1;
      sprintf(local_14,"%d",local_8);
      local_1c = FUN_00607960(local_14,0);
    }
    if (local_18 != (int *)0x0) {
      (**(code **)*local_18)(1);
    }
  }
  __security_check_cookie(local_c ^ (uint)&stack0xfffffffc);
  return;
}

