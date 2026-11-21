// FUN_005e9f20  005e9f20

void FUN_005e9f20(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  char local_214 [524];
  uint local_8;
  
  local_8 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  FUN_0062fde0("Assert: %s\t%s\t%i\n",param_1,param_2,param_3);
  if ((DAT_007960d8 != 0) && (*(int *)(DAT_007960d8 + 0x14) != 0)) {
    iVar1 = FUN_00607960("ShowAsserts",0);
    if (iVar1 != 0) {
      sprintf(local_214,"%s\n%s\nLine: %i",param_1,param_2,param_3);
      MessageBoxA((HWND)0x0,local_214,"Assert",0);
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

