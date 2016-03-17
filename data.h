#if !defined(DATA_INCLUDED)
#  define DATA_INCLUDED
extern int scale;
extern char version[8];
extern int presult;
extern PLAYING_MODE mode;
extern int batch_mode;
extern int swindle_mode;
extern int call_flag;
extern int crafty_rating;
extern int opponent_rating;
extern int time_used;
extern int time_used_opponent;
extern uint64_t total_moves;
extern int allow_cores;
extern int allow_memory;
extern int initialized;
extern int early_exit;
extern int new_game;
extern uint64_t burner[10];
extern int burnc[10];
extern char *AK_list[128];
extern char *GM_list[128];
extern char *IM_list[128];
extern char *B_list[128];
extern char *SP_list[128];
extern char *SP_opening_filename[128];
extern char *SP_personality_filename[128];
extern FILE *input_stream;
extern FILE *book_file;
extern FILE *books_file;
extern FILE *normal_bs_file;
extern FILE *computer_bs_file;
extern FILE *history_file;
extern FILE *log_file;
extern int log_id;
extern int output_format;

#  if !defined(NOEGTB)
extern int EGTBlimit;
extern int EGTB_draw;
extern int EGTB_search;
extern int EGTB_use;
extern void *EGTB_cache;
extern size_t EGTB_cache_size;
extern int EGTB_setup;
#  endif
extern int done;
extern int last_mate_score;
extern int last_opponent_move;
extern int check_depth;
extern int null_depth;
extern int LMR_remaining_depth;
extern int LMR_min_reduction;
extern int LMR_max_reduction;
extern int pgn_suggested_percent;
extern char pgn_event[128];
extern char pgn_date[128];
extern char pgn_round[128];
extern char pgn_site[128];
extern char pgn_white[128];
extern char pgn_white_elo[128];
extern char pgn_black[128];
extern char pgn_black_elo[128];
extern char pgn_result[128];
extern char log_filename[256];
extern char history_filename[256];
extern int number_of_solutions;
extern int solutions[10];
extern int solution_type;
extern int abs_draw_score;
extern int accept_draws;
extern int offer_draws;
extern int adaptive_hash;
extern size_t adaptive_hash_min;
extern size_t adaptive_hash_max;
extern size_t adaptive_hashp_min;
extern size_t adaptive_hashp_max;
extern int over;
extern int xboard;
extern int pong;
extern char book_path[128];
extern char log_path[128];
extern char tb_path[128];
extern char rc_path[128];
extern char cmd_buffer[4096];
extern char *args[512];
extern char buffer[4096];
extern int line_length;
extern unsigned char convert_buff[8];
extern int nargs;
extern int kibitz;
extern int game_wtm;
extern int last_search_value;
extern int pruning_margin[10];
extern int pruning_depth;
extern int failhi_delta, faillo_delta;
extern int ponder_value;
extern int move_actually_played;
extern int analyze_mode;
extern int annotate_mode;
extern int input_status;        /* 0=no input;
                                   1=predicted move read;
                                   2=unpredicted move read;
                                   3=something read, not executed. */
extern int resign;
extern int resign_counter;
extern int resign_count;
extern int draw_counter;
extern int draw_count;
extern int draw_offer_pending;
extern int draw_offered;
extern char audible_alarm;
extern char speech;
extern char hint[512];
extern char book_hint[512];
extern int post;
extern int search_depth;
extern uint64_t search_nodes;
extern uint64_t temp_search_nodes;
extern int search_move;
extern int ponder;
extern int ponder_move;
extern int force;
extern int ponder_moves[220];
extern int num_ponder_moves;
extern char initial_position[80];
extern int predicted;
extern int trace_level;
extern int book_move;
extern int book_accept_mask;
extern int book_reject_mask;
extern int book_random;
extern float book_weight_freq;
extern float book_weight_eval;
extern float book_weight_learn;
extern int book_search_trigger;
extern int book_selection_width;
extern int show_book;
extern int learn;
extern int learning;
extern int learn_value;
extern int abort_search;
extern int iteration_depth;
extern int root_wtm;
extern int root_beta;
extern int last_root_value;
extern ROOT_MOVE root_moves[256];
extern int n_root_moves;
extern int difficulty;
extern int time_limit;
extern int absolute_time_limit;
extern int search_time_limit;
extern int burp;
extern int quit;
extern unsigned int opponent_start_time, opponent_end_time;
extern unsigned int program_start_time, program_end_time;
extern unsigned int start_time, end_time;
extern TREE *block[MAX_BLOCKS + 1];
extern THREAD thread[CPUS];
#  if (CPUS > 1)
extern lock_t lock_split, lock_smp, lock_io, lock_root;

#    if defined(UNIX)
extern pthread_attr_t attributes;
#    endif
#  endif
extern int smp_max_threads;
extern int smp_split_group;
extern int smp_split_at_root;
extern int smp_min_split_depth;
extern unsigned int smp_split_nodes;
extern unsigned int parallel_splits;
extern unsigned int parallel_aborts;
extern unsigned int idle_time;
extern unsigned int max_split_blocks;
extern unsigned int idle_percent;
extern volatile int smp_idle;
extern volatile int smp_split;
extern volatile int smp_threads;
extern volatile int initialized_threads;
extern int crafty_is_white;
extern unsigned int nodes_between_time_checks;
extern unsigned int nodes_per_second;
extern int next_time_check;
extern int transposition_age;
extern int thinking;
extern int pondering;
extern int puzzling;
extern int booking;
extern int display_options;
extern unsigned int noise_level;
extern int noise_block;
extern int tc_moves;
extern int tc_time;
extern int tc_time_remaining[2];
extern int tc_moves_remaining[2];
extern int tc_secondary_moves;
extern int tc_secondary_time;
extern int tc_increment;
extern int tc_sudden_death;
extern int tc_operator_time;
extern int tc_safety_margin;
extern int draw_score[2];
extern char kibitz_text[4096];
extern int kibitz_depth;
extern int move_number;
extern int moves_out_of_book;
extern int first_nonbook_factor;
extern int first_nonbook_span;
extern int smp_nice;

#  if defined(SKILL)
extern int skill;
#  endif
extern int book_learn_eval[LEARN_INTERVAL];
extern int book_learn_depth[LEARN_INTERVAL];
extern int learn_seekto[64];
extern uint64_t learn_key[64];
extern int learn_nmoves[64];
extern uint64_t book_learn_key;
extern int learn_positions_count;
extern int book_learn_nmoves;
extern int book_learn_seekto;
extern int usage_level;
extern size_t hash_table_size;
extern size_t hash_path_size;
extern uint64_t hash_path_mask;
extern size_t pawn_hash_table_size;
extern uint64_t hash_mask;
extern uint64_t pawn_hash_mask;
extern HASH_ENTRY *trans_ref;
extern HPATH_ENTRY *hash_path;
extern PAWN_HASH_ENTRY *pawn_hash_table;
extern void *segments[MAX_BLOCKS + 32][2];
extern int nsegments;
extern const int p_values[13];
extern const int pcval[7];
extern const int p_vals[7];
extern const int pieces[2][7];
extern PATH last_pv;
extern int last_value;
extern const char translate[13];
extern const char empty_sqs[9];
extern const char square_color[64];
extern int knight_outpost[2][64];
extern int bishop_outpost[2][64];
extern int passed_pawn_hidden[2];
extern int doubled_pawn_value[2];
extern int outside_passed[2];
extern int pawn_defects[2][8];
extern int open_file[8];
extern int half_open_file[8];
extern int imbalance[9][9];
extern int pp_dist_bonus[8];
extern int king_tropism_n[8];
extern int king_tropism_b[8];
extern int king_tropism_r[8];
extern int king_tropism_q[8];
extern int pval[2][2][64];
extern int nval[2][2][64];
extern int bval[2][2][64];
extern int qval[2][2][64];
extern int kval_n[2][64];
extern int kval_k[2][64];
extern int kval_q[2][64];
extern int king_safety[16][16];
extern int mob_curve_r[48];
extern int safety_vector[16];
extern int tropism_vector[16];
extern const char b_n_mate_dark_squares[64];
extern const char b_n_mate_light_squares[64];
extern const int mate[64];
extern int16_t knight_mobility_table[64];
extern uint64_t magic_rook[64];
extern uint64_t magic_rook_mask[64];
extern unsigned int magic_rook_shift[64];
extern uint64_t mobility_mask_n[4];
extern uint64_t mobility_mask_b[4];
extern uint64_t mobility_mask_r[4];
extern uint64_t *magic_rook_indices[64];
extern uint64_t magic_rook_table[102400];
extern int16_t *magic_rook_mobility_indices[64];
extern int16_t magic_rook_mobility_table[102400];
extern uint64_t magic_bishop[64];
extern uint64_t magic_bishop_mask[64];
extern unsigned int magic_bishop_shift[64];
extern uint64_t *magic_bishop_indices[64];
extern uint64_t magic_bishop_table[5248];
extern int16_t *magic_bishop_mobility_indices[64];
extern int16_t magic_bishop_mobility_table[5248];
extern int8_t directions[64][64];
extern uint64_t pawn_attacks[2][64];
extern uint64_t knight_attacks[64];
extern uint64_t rook_attacks[64];
extern uint64_t bishop_attacks[64];
extern POSITION display;
extern uint64_t king_attacks[64];
extern uint64_t intervening[64][64];
extern uint64_t randoms[2][7][64];
extern uint64_t castle_random[2][2];
extern uint64_t enpassant_random[65];
extern uint64_t clear_mask[65];
extern uint64_t set_mask[65];
extern uint64_t file_mask[8];
extern uint64_t rank_mask[8];
extern uint64_t OO[2];
extern uint64_t OOO[2];
extern uint64_t mask_efgh, mask_fgh, mask_abc, mask_abcd;
extern uint64_t mask_advance_2_w;
extern uint64_t mask_advance_2_b;
extern uint64_t mask_left_edge;
extern uint64_t mask_right_edge;
extern uint64_t mask_not_edge;
extern uint64_t dark_squares;
extern uint64_t not_rook_pawns;
extern uint64_t plus1dir[65];
extern uint64_t plus7dir[65];
extern uint64_t plus8dir[65];
extern uint64_t plus9dir[65];
extern uint64_t minus1dir[65];
extern uint64_t minus7dir[65];
extern uint64_t minus8dir[65];
extern uint64_t minus9dir[65];
extern uint64_t mask_eptest[64];
extern uint64_t mask_clear_entry;

#  if !defined(INLINEASM)
extern unsigned char msb[65536];
extern unsigned char lsb[65536];
#  endif
extern unsigned char msb_8bit[256];
extern unsigned char lsb_8bit[256];
extern unsigned char pop_cnt_8bit[256];
extern unsigned char is_outside[256][256];
extern uint64_t mask_pawn_connected[64];
extern uint64_t mask_pawn_isolated[64];
extern uint64_t mask_passed[2][64];
extern uint64_t mask_no_pattacks[2][64];
extern uint64_t mask_hidden_left[2][8];
extern uint64_t mask_hidden_right[2][8];
extern uint64_t pawn_race[2][2][64];
extern BOOK_POSITION book_buffer[BOOK_CLUSTER_SIZE];
extern BOOK_POSITION book_buffer_char[BOOK_CLUSTER_SIZE];
extern const int rankflip[2][8];
extern const int sqflip[2][64];
extern const int sign[2];
extern int direction[2];
extern int dark_corner[2];
extern int light_corner[2];
extern int OOsqs[2][3];
extern int OOOsqs[2][3];
extern int OOfrom[2];
extern int OOto[2];
extern int OOOto[2];
extern int epsq[2];
extern int rook_A[2];
extern int rook_D[2];
extern int rook_F[2];
extern int rook_G[2];
extern int rook_H[2];
extern int capleft[2];
extern int capright[2];
extern int pawnadv1[2];
extern int pawnadv2[2];

#  if !defined(NOEGTB)
extern int cbEGTBCompBytes;
#  endif
extern int piece_values[7][2];
extern int pawn_can_promote;
extern int wtm_bonus[2];
extern int undeveloped_piece;
extern int pawn_connected[2];
extern int pawn_isolated[2];
extern int pawn_weak[2];
extern int lower_n;
extern int mobility_score_n[4];
extern int lower_b;
extern int bishop_trapped;
extern int bishop_with_wing_pawns[2];
extern int bishop_pair[2];
extern int mobility_score_b[4];
extern int mobility_score_r[4];
extern int rook_on_7th[2];
extern int rook_open_file[2];
extern int rook_half_open_file[2];
extern int rook_behind_passed_pawn[2][8];
extern int passed_pawn_value[2][8];
extern int passed_pawn_blockaded_by_enemy[2][8];
extern int passed_pawn_blockaded_by_friendly[2][8];
extern int passed_pawn_connected[2][8];
extern int passed_pawn_candidate[2][8];
extern int passed_pawn_obstructed[8];
extern int passed_pawn_far_away[8];
extern int passed_pawn_not_far_away[8];
extern int rook_trapped;
extern int king_king_tropism;
extern int king_safety_mate_threat;
extern int development_thematic;
extern int development_losing_castle;
extern int development_not_castled;
extern struct personality_term personality_packet[256];
#endif
