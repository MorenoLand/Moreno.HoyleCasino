// FUN_006884b0  006884b0

void FUN_006884b0(undefined4 param_1)

{
  SIZE_T SVar1;
  _MEMORY_BASIC_INFORMATION local_54;
  PVOID local_38;
  uint local_34;
  uint local_30;
  _SYSTEM_INFO local_2c;
  uint local_8;
  
  FUN_00688440(param_1,"\r\n\tModule list: names, addresses, sizes, time stamps and file times:\r\n"
              );
  GetSystemInfo(&local_2c);
  local_34 = local_2c.dwPageSize;
  local_8 = (int)(0x40000000 / (ulonglong)local_2c.dwPageSize) << 2;
  local_30 = 0;
  local_38 = (PVOID)0x0;
  while (local_30 < local_8) {
    SVar1 = VirtualQuery((LPCVOID)(local_30 * local_34),&local_54,0x1c);
    if (SVar1 == 0) {
      local_30 = (int)(0x10000 / (ulonglong)local_34) + local_30;
    }
    else if (local_54.RegionSize == 0) {
      local_30 = (int)(0x10000 / (ulonglong)local_34) + local_30;
    }
    else {
      local_30 = local_54.RegionSize / local_34 + local_30;
      if ((local_54.State == 0x1000) && (local_38 < local_54.AllocationBase)) {
        local_38 = local_54.AllocationBase;
        FUN_00688580(param_1,local_54.AllocationBase);
      }
    }
  }
  return;
}

