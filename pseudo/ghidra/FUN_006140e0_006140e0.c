// FUN_006140e0  006140e0

void FUN_006140e0(char *param_1)

{
  void *_Str;
  int local_240;
  char local_23c [264];
  undefined4 local_134;
  size_t local_130;
  uint local_12c;
  size_t local_128;
  char local_124 [264];
  uint local_1c;
  uint local_18;
  FILE *local_14;
  int local_10;
  int local_8;
  
  local_1c = DAT_00781870 ^ (uint)&stack0xfffffffc;
  local_14 = (FILE *)0x0;
  if ((DAT_007960d8 != 0) && (*(int *)(DAT_007960d8 + 0x10) != 0)) {
    if (param_1 == (char *)0x0) {
      param_1 = "screenshots";
    }
    _mkdir(param_1);
    strcpy(local_23c,param_1);
    FUN_005ea540(local_23c);
    for (local_240 = 0; local_240 < 1000; local_240 = local_240 + 1) {
      sprintf(local_124,"%sscreenshot%03d.tga",local_23c,local_240);
      local_14 = (FILE *)FUN_005ea9c0(local_124,&DAT_006d8524);
      if ((local_14 == (FILE *)0x0) &&
         (local_14 = (FILE *)FUN_005ea9c0(local_124,&DAT_006c2d2c), local_14 != (FILE *)0x0)) break;
      fclose(local_14);
      local_14 = (FILE *)0x0;
    }
    if (local_14 != (FILE *)0x0) {
      local_134 = *(undefined4 *)(*(int *)(DAT_007960d8 + 0x10) + 0x50);
      local_12c = FUN_006238f0();
      local_18 = FUN_00623910();
      local_128 = FUN_00623930();
      putc(0,local_14);
      putc(0,local_14);
      putc(2,local_14);
      putc(0,local_14);
      putc(0,local_14);
      putc(0,local_14);
      putc(0,local_14);
      putc(0,local_14);
      putc(0,local_14);
      putc(0,local_14);
      putc(0,local_14);
      putc(0,local_14);
      putc(local_12c & 0xff,local_14);
      putc((int)(local_12c & 0xff00) >> 8,local_14);
      putc(local_18 & 0xff,local_14);
      putc((int)(local_18 & 0xff00) >> 8,local_14);
      putc(local_128 << 3,local_14);
      putc(0x20,local_14);
      local_8 = FUN_00623910();
      local_130 = FUN_006238f0();
      for (local_10 = 0; local_10 < local_8; local_10 = local_10 + 1) {
        _Str = (void *)FUN_006238d0(local_10);
        fwrite(_Str,local_128,local_130,local_14);
      }
      fclose(local_14);
    }
  }
  __security_check_cookie(local_1c ^ (uint)&stack0xfffffffc);
  return;
}

