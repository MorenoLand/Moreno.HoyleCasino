// FUN_00633120  00633120

void __fastcall FUN_00633120(int *param_1)

{
  char *_Source;
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  char local_12c [268];
  char local_20 [16];
  uint local_10;
  undefined4 *local_c;
  int local_8;
  
  local_10 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  if (DAT_00795f6c != '\0') {
    local_12c[0] = DAT_00795f6c;
    local_12c[1] = 0;
    strcat(local_12c,":\\Encore");
    strcat(local_12c,"\\");
    _Source = (char *)(**(code **)(*param_1 + 0x120))();
    strcat(local_12c,_Source);
    strcat(local_12c,"\\");
    FUN_00604810(local_12c);
  }
  for (local_c = (undefined4 *)(**(code **)(*param_1 + 0x208))();
      (local_c != (undefined4 *)0x0 && (*(char *)*local_c != '\0')); local_c = local_c + 1) {
    FUN_00604a20(*local_c);
  }
  iVar1 = (**(code **)(*param_1 + 0x124))();
  if (iVar1 != 0) {
    uVar2 = (**(code **)(*param_1 + 0x124))();
    FUN_00604a20(uVar2);
  }
  local_8 = 0;
  while( true ) {
    iVar1 = (**(code **)(*param_1 + 0xe4))();
    if (iVar1 <= local_8) break;
    piVar3 = (int *)(**(code **)(*param_1 + 0xe0))(local_8);
    for (local_c = (undefined4 *)(**(code **)(*piVar3 + 0x20))();
        (local_c != (undefined4 *)0x0 && (*(char *)*local_c != '\0')); local_c = local_c + 1) {
      FUN_00604a20(*local_c);
    }
    local_8 = local_8 + 1;
  }
  for (local_8 = 1; local_8 < 0xb; local_8 = local_8 + 1) {
    sprintf(local_20,"patch%d.prf",local_8);
    FUN_00604a20(local_20);
  }
  __security_check_cookie(local_10 ^ (uint)&stack0xfffffffc);
  return;
}

