// FUN_00688770  00688770

void FUN_00688770(LPSTR param_1)

{
  BOOL BVar1;
  ushort local_c [2];
  ushort local_8 [2];
  
  BVar1 = FileTimeToLocalFileTime((FILETIME *)&stack0x00000008,(LPFILETIME)&stack0x00000008);
  if ((BVar1 != 0) &&
     (BVar1 = FileTimeToDosDateTime((FILETIME *)&stack0x00000008,local_c,local_8), BVar1 != 0)) {
    wsprintfA(param_1,"%d/%d/%d %02d:%02d:%02d",(int)(uint)local_c[0] >> 5 & 0xf,local_c[0] & 0x1f,
              ((int)(uint)local_c[0] >> 9) + 0x7bc,(int)(uint)local_8[0] >> 0xb,
              (int)(uint)local_8[0] >> 5 & 0x3f,(local_8[0] & 0x1f) << 1);
    return;
  }
  *param_1 = '\0';
  return;
}

