#pragma once

internal String8      lnk_read_data_from_file_path(Arena *arena, String8 path);
internal String8Array lnk_read_data_from_file_path_parallel(TP_Context *tp, Arena *arena, String8Array path_arr);

internal void lnk_write_data_list_to_file_path(String8 path, String8List list);
internal void lnk_write_data_to_file_path(String8 path, String8 data);


