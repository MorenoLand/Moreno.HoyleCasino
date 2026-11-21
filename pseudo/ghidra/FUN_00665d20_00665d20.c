// FUN_00665d20  00665d20

void FUN_00665d20(void)

{
  UINT UVar1;
  tagWAVEOUTCAPSA local_40;
  uint local_c;
  undefined4 local_8;
  
  local_c = DAT_00781870 ^ (uint)&stack0xfffffffc;
  local_8 = 0;
  waveOutGetDevCapsA(0,&local_40,0x34);
  if ((local_40.dwFormats & 0x40) == 0) {
    if ((local_40.dwFormats & 0x10) == 0) {
      DAT_007950b4 = 0;
    }
    else {
      DAT_007950b4 = 8;
    }
  }
  else {
    DAT_007950b4 = 0x10;
  }
  UVar1 = waveOutGetNumDevs();
  if ((UVar1 != 0) && ((local_40.dwSupport & 0x10) != 0)) {
    local_8 = 2;
  }
  __security_check_cookie(local_c ^ (uint)&stack0xfffffffc);
  return;
}

