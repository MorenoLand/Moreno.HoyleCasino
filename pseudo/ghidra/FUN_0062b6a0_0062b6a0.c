// FUN_0062b6a0  0062b6a0

void __fastcall FUN_0062b6a0(int param_1)

{
  ushort *puVar1;
  void *pvVar2;
  size_t sVar3;
  char *_Source;
  int local_370;
  char local_35c [268];
  char *local_250;
  char *local_24c;
  char *local_248;
  char local_244;
  char local_243;
  char local_242;
  char local_241;
  char local_240;
  int local_13c;
  int local_138;
  char local_134 [264];
  uint local_2c;
  int local_28;
  int local_24;
  undefined1 local_20 [10];
  ushort local_16;
  uint local_14;
  long local_10;
  
  local_2c = DAT_00781870 ^ (uint)&stack0xfffffffc;
  if (*(int *)(param_1 + 0xc) != 0) {
    fseek(*(FILE **)(param_1 + 0xc),0,2);
    local_138 = ftell(*(FILE **)(param_1 + 0xc));
    fseek(*(FILE **)(param_1 + 0xc),0,0);
    fseek(*(FILE **)(param_1 + 0xc),local_138 + -0x16,0);
    fread(local_20,1,0x1a,*(FILE **)(param_1 + 0xc));
    pvVar2 = operator_new((local_16 - 1) * 0x10 + 0x18);
    *(void **)(param_1 + 0x14) = pvVar2;
    **(uint **)(param_1 + 0x14) = (uint)local_16;
    *(undefined4 *)(*(int *)(param_1 + 0x14) + 4) = 0;
    local_24c = operator_new(local_14);
    fseek(*(FILE **)(param_1 + 0xc),local_10,0);
    fread(local_24c,1,local_14,*(FILE **)(param_1 + 0xc));
    local_248 = local_24c;
    for (local_24 = 0; local_24 < (int)(uint)local_16; local_24 = local_24 + 1) {
      local_250 = local_248;
      _Source = local_248 + 0x2e;
      if (*(ushort *)(local_248 + 0x1c) < 0x104) {
        puVar1 = (ushort *)(local_248 + 0x1c);
        local_248 = _Source;
        strncpy(local_35c,_Source,(uint)*puVar1);
        local_35c[*(ushort *)(local_250 + 0x1c)] = '\0';
      }
      else {
        local_248 = _Source;
        FUN_005e9f20("false","..\\scilib\\platform\\prf.cpp",0x153);
        local_35c[0] = '\0';
      }
      local_248 = local_248 +
                  (uint)*(ushort *)(local_250 + 0x1c) + (uint)*(ushort *)(local_250 + 0x1e) +
                  (uint)*(ushort *)(local_250 + 0x20);
      _splitpath(local_35c,(char *)0x0,(char *)0x0,local_134,&local_244);
      local_13c = atoi(local_134);
      _strupr(&local_244);
      if ((local_13c == 0) || (sVar3 = strlen(&local_244), sVar3 < 4)) {
        FUN_005e9f20("false","..\\scilib\\platform\\prf.cpp",0x171);
        local_13c = 0;
        local_28 = 0x203f3f3f;
      }
      else {
        sVar3 = strlen(&local_244);
        if (sVar3 < 5) {
          local_370 = 0x20000000;
        }
        else {
          local_370 = (int)local_240;
        }
        local_28 = local_241 * 0x10000 + local_370 + local_242 * 0x100 + (int)local_243;
      }
      *(int *)(*(int *)(param_1 + 0x14) + 8 + local_24 * 0x10) = local_28;
      *(int *)(*(int *)(param_1 + 0x14) + 0xc + local_24 * 0x10) = local_13c;
      *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x10 + local_24 * 0x10) =
           *(undefined4 *)(local_250 + 0x2a);
      *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x14 + local_24 * 0x10) =
           *(undefined4 *)(local_250 + 0x14);
    }
    operator_delete(local_24c);
  }
  __security_check_cookie(local_2c ^ (uint)&stack0xfffffffc);
  return;
}

