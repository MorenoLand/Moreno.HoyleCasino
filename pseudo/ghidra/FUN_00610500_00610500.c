// FUN_00610500  00610500

void * __fastcall FUN_00610500(void *param_1)

{
  undefined1 local_d;
  undefined1 *local_c;
  
  local_c = &local_d;
  FUN_005bbd80(0);
  memset(param_1,0,0x20);
  *(undefined4 *)((int)param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)((int)param_1 + 0x34) = 0;
  *(undefined4 *)((int)param_1 + 0x38) = 0;
  *(undefined4 *)((int)param_1 + 0x3c) = 0;
  *(undefined4 *)((int)param_1 + 0x40) = 0;
  *(undefined4 *)((int)param_1 + 0x44) = 0;
  return param_1;
}

