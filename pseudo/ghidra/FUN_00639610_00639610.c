// FUN_00639610  00639610

int FUN_00639610(undefined4 param_1,char param_2)

{
  int iVar1;
  int local_10;
  
  iVar1 = FUN_00639520(param_1);
  if ((*(int *)(&DAT_00763574 + iVar1 * 0x380) == 1) && (param_2 == '\0')) {
    local_10 = 1;
  }
  else {
    local_10 = 0;
  }
  return *(int *)(&DAT_00763578 + iVar1 * 0x380) + local_10;
}

