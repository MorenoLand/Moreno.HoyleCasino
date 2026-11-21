// FUN_006705c0  006705c0

void __fastcall FUN_006705c0(int param_1)

{
  bool bVar1;
  int iVar2;
  char local_18 [8];
  uint local_10;
  char *local_c;
  int local_8;
  
  local_10 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  local_c = (char *)FUN_00520e60();
  bVar1 = false;
  local_8 = 0;
  do {
    if (*local_c == '\0') {
LAB_00670665:
      __security_check_cookie(local_10 ^ (uint)&stack0xfffffffc);
      return;
    }
    if ((*local_c < '0') || ('9' < *local_c)) {
      if (bVar1) {
        local_18[local_8] = '\0';
        iVar2 = atoi(local_18);
        *(int *)(param_1 + 0xb00) = iVar2;
        goto LAB_00670665;
      }
    }
    else {
      bVar1 = true;
      local_18[local_8] = *local_c;
      local_8 = local_8 + 1;
    }
    local_c = local_c + 1;
  } while( true );
}

