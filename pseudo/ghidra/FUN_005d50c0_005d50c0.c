// FUN_005d50c0  005d50c0

void __fastcall FUN_005d50c0(int param_1)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int local_24;
  int local_c;
  
  puVar2 = (undefined4 *)FUN_005d52e0();
  memset(*(void **)(param_1 + 0x3a4),0,0x76f4);
  cVar1 = (**(code **)(*DAT_0162ee84 + 0x33c))(0xffffffff);
  if ((cVar1 == '\0') || (DAT_016306b0 != 0)) {
    *puVar2 = 5000;
    puVar2[1] = 0;
  }
  else {
    (**(code **)(*DAT_007947e4 + 0x264))(param_1);
  }
  uVar3 = FUN_0062fbf0(10000);
  uVar4 = FUN_0062fbf0(10000);
  uVar5 = FUN_0062fbf0(10000);
  sprintf((char *)(puVar2 + 4),"%04d  %04d  %04d  %04d",0x1e61,uVar3,uVar4,uVar5);
  *(undefined1 *)(puVar2 + 10) = 1;
  *(undefined1 *)((int)puVar2 + 0x29) = 0;
  *(undefined1 *)((int)puVar2 + 0x2a) = 0;
  *(undefined1 *)(puVar2 + 0xc) = 1;
  *(undefined1 *)((int)puVar2 + 0x5d) = 1;
  for (local_c = 0; local_c < 0x16; local_c = local_c + 1) {
    *(undefined1 *)((int)puVar2 + local_c + 0x31) = 1;
    *(undefined1 *)((int)puVar2 + local_c + 0x47) = 0;
  }
  *(undefined1 *)((int)puVar2 + 0x3f) = 0;
  puVar2[0xb] = 0;
  *(undefined1 *)((int)puVar2 + 0x5e) = 2;
  for (local_c = 0; local_c < 100; local_c = local_c + 1) {
    *(undefined1 *)(puVar2 + local_c * 9 + 0x18) = 0xff;
    *(undefined1 *)((int)puVar2 + local_c * 0x24 + 0x61) = 1;
    *(undefined1 *)((int)puVar2 + local_c * 0x24 + 0x62) = 1;
    *(undefined1 *)((int)puVar2 + local_c * 0x24 + 99) = 0;
    *(undefined1 *)(puVar2 + local_c * 9 + 0x19) = 0;
    puVar2[local_c * 9 + 0x1f] = 0;
    puVar2[local_c * 9 + 0x20] = 0xfffffc18;
    for (local_24 = 0; local_24 < 0x14; local_24 = local_24 + 1) {
      *(undefined1 *)((int)puVar2 + local_c * 0x24 + local_24 + 0x65) = 0;
    }
  }
  puVar2[2] = 0;
  puVar2[3] = 0;
  return;
}

