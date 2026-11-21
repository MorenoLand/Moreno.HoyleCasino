// FUN_0065ff10  0065ff10

void FUN_0065ff10(void)

{
  char *_Source;
  char local_828 [16];
  char local_818 [4];
  FILE *local_814;
  int local_810;
  undefined1 local_80c;
  undefined1 local_80b [1023];
  char local_40c [1028];
  uint local_8;
  
  local_8 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  local_80c = 0;
  memset(local_80b,0,0x3ff);
  for (local_810 = 0; local_810 < 100; local_810 = local_810 + 1) {
    strcpy(local_828,"user");
    _Source = _itoa(local_810,local_818,10);
    strcat(local_828,_Source);
    strcat(local_828,".log");
    strcpy(local_40c,local_828);
    local_814 = (FILE *)FUN_005ea9c0(local_40c,&DAT_006c2d28);
    if (local_814 == (FILE *)0x0) break;
    fclose(local_814);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

