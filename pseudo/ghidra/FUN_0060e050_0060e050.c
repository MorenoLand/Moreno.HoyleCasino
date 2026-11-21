// FUN_0060e050  0060e050

void __fastcall FUN_0060e050(int *param_1)

{
  char cVar1;
  uint uVar2;
  HWND pHVar3;
  HDC pHVar4;
  uint local_c;
  
  uVar2 = FUN_00613600();
  uVar2 = uVar2 & 0xffff;
  if (uVar2 < 0x481) {
    if (uVar2 == 0x480) {
      local_c = 0x360;
      goto LAB_0060e0f4;
    }
    if (uVar2 == 0x280) {
      local_c = 0x1e0;
      goto LAB_0060e0f4;
    }
    if (uVar2 == 800) {
      local_c = 600;
      goto LAB_0060e0f4;
    }
    if (uVar2 == 0x400) {
      local_c = 0x300;
      goto LAB_0060e0f4;
    }
  }
  else {
    if (uVar2 == 0x500) {
      local_c = 0x400;
      goto LAB_0060e0f4;
    }
    if (uVar2 == 0x640) {
      local_c = 0x4b0;
      goto LAB_0060e0f4;
    }
  }
  local_c = FUN_00613620();
  local_c = local_c & 0xffff;
LAB_0060e0f4:
  pHVar3 = CreateWindowExA(0,(LPCSTR)param_1[0x2f],(LPCSTR)param_1[0x21],0x80000000,0,0,uVar2,
                           local_c,(HWND)0x0,(HMENU)0x0,DAT_016306b4,param_1);
  param_1[0x23] = (int)pHVar3;
  if (DAT_00795fb9 == '\0') {
    (**(code **)(*param_1 + 0xc))();
  }
  else {
    (**(code **)(*param_1 + 8))();
  }
  *(undefined1 *)((int)param_1 + 0x95) = 1;
  if ((param_1[0x23] == 0) ||
     (((cVar1 = FUN_0060dc00(param_1[0x23]), cVar1 == '\0' ||
       ((((cVar1 = FUN_0060e2c0(uVar2,local_c,0x18), cVar1 == '\0' &&
          (cVar1 = FUN_0060e2c0(uVar2,local_c,0x10), cVar1 == '\0')) &&
         (cVar1 = FUN_0060e2c0(0x280,0x1e0,0x18), cVar1 == '\0')) &&
        ((cVar1 = FUN_0060e2c0(0x280,0x1e0,0x10), cVar1 == '\0' &&
         (cVar1 = FUN_0060e2c0(0x280,0x1e0,8), cVar1 == '\0')))))) &&
      (*(char *)((int)param_1 + 0x96) == '\0')))) {
    FUN_0060dc50(param_1[0x23]);
    *(undefined1 *)((int)param_1 + 0x95) = 0;
    DAT_00795f97 = 0;
    (**(code **)(*param_1 + 0x34))();
    FUN_0060dd10(1);
  }
  else {
    DAT_00795f97 = 1;
    pHVar4 = GetDC((HWND)param_1[0x23]);
    param_1[0x24] = (int)pHVar4;
    FUN_0060cd90(1);
    DAT_015e55d3 = 1;
    DAT_015e55d5 = 0;
  }
  FUN_00607930("FullScreen",DAT_00795f97);
  return;
}

