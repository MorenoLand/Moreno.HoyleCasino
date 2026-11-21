// FUN_0045e140  0045e140

void FUN_0045e140(void)

{
  char cVar1;
  undefined4 uVar2;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined4 extraout_var_01;
  undefined2 local_10 [2];
  undefined2 local_c [2];
  undefined4 local_8;
  
  local_8 = *(undefined4 *)(DAT_00790738 + 0x104);
  cVar1 = FUN_005df700(0xffffffff);
  if ((cVar1 != '\0') && (cVar1 = FUN_005da7b0(extraout_var_01), cVar1 == '\0')) {
    FUN_00452a40(local_8,local_10,local_c);
    uVar2 = FUN_00461360(local_8,CONCAT22(extraout_var,local_10[0]));
    *(undefined4 *)(DAT_00790738 + 0x11c) = uVar2;
    uVar2 = FUN_00461360(local_8,CONCAT22(extraout_var_00,local_c[0]));
    *(undefined4 *)(DAT_00790738 + 0x120) = uVar2;
    *(undefined4 *)(DAT_00790738 + 0x118) = local_8;
    FUN_00458be0(local_8,*(undefined4 *)(DAT_00790738 + 0x11c));
    FUN_00458be0(local_8,*(undefined4 *)(DAT_00790738 + 0x120));
  }
  return;
}

