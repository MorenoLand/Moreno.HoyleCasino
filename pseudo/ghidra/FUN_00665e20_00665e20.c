// FUN_00665e20  00665e20

undefined4 FUN_00665e20(void)

{
  _MEMORYSTATUS local_28;
  undefined4 local_8;
  
  local_8 = 0;
  local_28.dwLength = 0x20;
  GlobalMemoryStatus(&local_28);
  DAT_00795f9c = local_28.dwTotalPhys - 0x400000;
  if (DAT_00795f9c < 0x800000) {
    DAT_00795f9c = 0x800000;
  }
  DAT_00795f98 = local_28.dwTotalPhys < 0xf00000;
  return local_8;
}

