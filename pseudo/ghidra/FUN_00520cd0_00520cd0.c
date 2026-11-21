// FUN_00520cd0  00520cd0

void FUN_00520cd0(void)

{
  char *_Source;
  char local_74 [104];
  uint local_c;
  int local_8;
  
  local_c = DAT_00781870 ^ (uint)&stack0xfffffffc;
  FUN_006375b0();
  _Source = (char *)FUN_00520e60();
  strcpy(local_74,_Source);
  local_8 = 0;
  do {
    if (0xc < local_8) {
LAB_00520d30:
      sprintf(&DAT_00793268,"%s%s",local_74,&DAT_006c2d40);
      __security_check_cookie(local_c ^ (uint)&stack0xfffffffc);
      return;
    }
    if (local_74[local_8] == '.') {
      local_74[local_8] = '\0';
      goto LAB_00520d30;
    }
    local_8 = local_8 + 1;
  } while( true );
}

